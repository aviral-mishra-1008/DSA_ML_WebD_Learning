import pandas as pd
# df = pd.read_csv('survey_results_public.csv')
# df_schema = pd.read_csv('survey_results_schema.csv')

#IMAGINING THE DATAFRAME AS A NATIVE PYTHON SEQUENCE
person = {
    "first" : 'Aviral',
    'second': 'Mishra',
    'email': 'aviral.20225017@mnnit.ac.in'
} #THIS IS DATA REPRESENTATION FOR A SINGLE PERSON BUT FOR MANY WE'LL SURELY REQUIRE LISTS

people = {
    "Name" : ['Aviral','Shobhita'],
    "Surname" : ['Mishra','Srivastava'],
    'Email' : ['aviral.20225017@mnnit.ac.in','shobhita.BS354312@aiimsd.ac.in']
} #LIKE THIS ONE!

df_native = pd.DataFrame(people)
pd.set_option('display.max_columns',3)
# print(df_native)

#you can call by column names 
# print(df_native['Email'])


#checking data types
# print(type(df_native['Email']))

#now this returns a pandas.core.series.Series
#basically series data type... it means is that every column is series in itself

# print(df_native.Email) #these are also called atributes, columns are atributes so can be sued like this
#but prefer the method one involving ['_column_name_']

#we can access multiple columns by passing a list of columns in a list
# print(df_native[['Email','Surname']])
#So basically that gives us both columns now the output here will not be a series it will return a filtered down dataframe 

# df_native.columns #returns all column name
# loc and iloc give us rows....iloc basically gives us rows by index....0 means the first row and so on
# print(df_native.iloc[0])
# print(df_native.iloc[[0,1]]) #gives a list of rows and it returns those rows

#using iloc we can also get columns and that goes as second input
# print(df_native.iloc[0,1]) #gives first row and second column information which is basically like one field or one cell


#see loc takes in label.....but its here see:
# print(df_native)
#so that left most column is index and that is the label that loc takes in and column label is first column cells
# print(df_native.loc[0])
# print(df_native.loc[[0,1],'Email']) #rows,coluumns


#working with large data

df = pd.read_csv('survey_results_public.csv')
# print(df.columns)
# print(df.shape)
# print(df['Hobbyist'])

#see why pandas is so good
# print(df['Hobbyist'].value_counts())
#and that returns all possibilities

print(df.loc[0])