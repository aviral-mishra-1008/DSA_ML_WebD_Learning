import pandas as pd
df = pd.read_csv('survey_results_public.csv')
df_schema = pd.read_csv('survey_results_schema.csv')
#print(df_schema) #now this doesn't give me all rows and columns rather it gives us a summary of the things that are present
print(df.shape) #this prints the shape of the df which is (row, columns)
print(df.info) #gives all information like data types, rows, columns
print(df.describe) #gives more detailed information

pd.set_option('display.max_columns', 85) 
#this will make sure all columns get printed 
#to view all rows as well we'll have to write rows as well...i.e display.max_rows
df.head() #specify the value inside head to print the number of rows and by default it gives 5 rows
df.tail() #this gives last 5 rows or n specified inside


