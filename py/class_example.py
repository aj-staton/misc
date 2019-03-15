# Written by Austin Staton
# Used to demonstrate the use of OOP in Python.

class University:
	
	def __init__(self, name, location):
		self._name = name
		self._location = location

	def getName(self):
		return self._name
	def getLocation(self):
		return self._location
	def getUniversity(self):
		return self.getName() + "; " + self.getLocation()

class College(University):
	
	def __init__  (self, name, location, collegeName):
		University.__init__(self, name, location)
		self._collegeName = collegeName

	def getCollegeName(self):
		return self._collegeName
	def getCollege(self):
		return self.getUniversity() + "; " + self.getCollegeName()


def main():
	# Create 'University' and 'College' Object
	UofSC = University("Univeristy of South Carolina", "Columbia, SC")
	EngrComp = College("UofSC", "COLA, SC", "College of Engineering and Computing")

	#print (UofSC.getName() + "; " +  UofSC.getLocation())
	#print (EngrComp.getCollege())
	print (UofSC.getUniversity())  
	print (EngrComp.getCollege())
main()
