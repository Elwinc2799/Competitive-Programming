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
with open('output.csv', 'w') as outputfile:
    
    writer = csv.writer(outputfile)
    writer.writerow(['shopid','userid'])
    for i in range(len(shopid)):
        writer.writerow([shopid[i], '0'])     
                        
        
            
            

            
            