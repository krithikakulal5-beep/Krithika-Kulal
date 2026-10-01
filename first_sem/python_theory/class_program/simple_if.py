age=int(input("enter the age"))
day=input("enter the day")
movie_time=input("enter the timmings")
ticket_price = 250
weekend="saturady","sunday"

if day== weekend:
    ticket_price = ticket_price+(ticket_price * 25/100)
if movie_time=="morning": 
    movie_time="morning show"
elif movie_time=="afternoon":
    ticket_price=ticket_price+(ticket_price * 10/100)
    movie_time="afternoon show"
else:
    ticket_price=ticket_price+(ticket_price * 30/100)
    movie_time="night show"   
if age <= 5:
    ticket_price = ticket_price-(ticket_price * 50/100)  
    category = "Child"
elif 6 <= age <= 59:
    category = "Adult" 
else:
    category = "Senior Citizen"
    ticket_price=ticket_price-(ticket_price * 10/100)
    if not weekend:
        ticket_price = ticket_price-(ticket_price * 10/100) 
print(f"\nCategory: {category}")
print(f"Final Ticket Price: ${ticket_price:.2f}")
print(f"movie time:{movie_time}")    