#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""
print("===============================")
print("PROFILE CARD")
print("===============================")
name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
name=name.replace("  ","").strip().title()
email=email.lower()
phone=phone.replace("-","")
phone="*********"+phone[-4:]
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
domain=email.split("@")[1].lower()
mobi=len(phone)
print("name:",name)
print("intials:",initials)
print("email:",email)
print("phone:",phone)
print("domain:",domain)
if mobi==13:
    is_valid=True
else:
    is_valid=False    
print("valid:",is_valid)
print("================================")