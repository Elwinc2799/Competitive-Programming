import csv
import operator
from datetime import datetime
from datetime import timedelta
#sorting shop id and time

#save orderbrushing user



with open('order_brush_order.csv', 'r') as file:
    reader = csv.reader(file)
    next(reader)
    sort = sorted(reader, key=operator.itemgetter(1,3))

shopid = list(set())

for row in sort:
    shopid.append(row[1])


brushedShop = list(set())
brushedID = []
with open('output.csv','w') as outputfile:
    
    writer = csv.writer(outputfile)
    writer.writerow(['shopid','userid'])
    for i in range(len(shopid)):
        brushedShop.append(shopid[i])
        userid =  ""
        first = True
        for row in sort:
            if shopid[i] == row[1]:
                startTime = datetime.strptime(row[3], "%Y-%m-%d %H:%M:%S")
                endTime = startTime + timedelta(minutes=60)
                num = 0
                orderbrush=list(set())
                conc = 0
                for time in sort:
                    TIME = datetime.strptime(time[3], "%Y-%m-%d %H:%M:%S")
                    if shopid[i] == row[1] and startTime <= TIME <= endTime:
                        num+=1
                        orderbrush.append(row[2])
                conc = num/len(orderbrush)
                
                if conc >= 3:
                    for user in orderbrush:  
                        if (first):
                            userid.append(user)
                            first = False
                        else:
                            userid.append('&')
                            userid.append(user)
        
        if (userid == ""):
            userid += '0'
            
        writer.writerow([shopid[i], userid])     
                        
        
            
            

            
            