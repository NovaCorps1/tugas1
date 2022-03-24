class Agent: #template
	jumlah_agent = 0

	def __init__(self, inputName, inputHealth, inputPower, inputArmor):
		#instance variabel
		self.name = inputName
		self.health = inputHealth
		self.power = inputPower
		self.armor = inputArmor
		Agent.jumlah_agent += 1

	#method tanpa return, tanpa argumen
	def siapa(self):
			print("namaku adalah " + self.name)

	#method dengan argumen, tanpa return
	def healthUp(self,up):
			self.health += up

	#method dengan argumen, tanpa return
	def healthdown(self,down):
			self.health -= down

	#method dengan return
	def getHealth(self):
			return self.health

agent1 = Agent("astra", 100, 20, 5)
agent2 = Agent("viper",100, 15, 7)
agent3 = Agent("omen", 110, 40, 0)

agent1.siapa()
agent1.healthUp(50)
agent2.healthdown(75)
print(agent1.getHealth())
print(agent2.getHealth())