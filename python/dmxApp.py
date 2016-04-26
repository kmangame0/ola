import array
from ola.ClientWrapper import ClientWrapper
from mido import MidiFile

# def DmxSent(state):
# 	wrapper.Stop()

# universe = 1
# data = array.array('B', [200, 0, 0])
# wrapper = ClientWrapper()
# client = wrapper.Client()
# client.SendDmx(universe, data, DmxSent)
# wrapper.Run()

def test():
	mid = MidiFile("/Users/kellenreason/Desktop/bangbang/notes.mid")
	for i, track in enumerate(mid.tracks):
		print('Track {}: {}'. format(i, track.name))
		for message in track:
			print(message)



test()
