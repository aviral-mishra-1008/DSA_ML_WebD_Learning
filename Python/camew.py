import camelot as cam
pdf = cam.read_pdf("file:///C:/Users/Vatsal/Desktop/DRUG%20PRICING%20REPORT%20WITH%20APPENDIX%20v3.pdf",pages="7")
pdf[0].df.to_csv("C:/Users/Vatsal/Desktop/Camelot_demo.csv")
