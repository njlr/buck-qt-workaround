# Utility function to flatten a list of lists
def flatten(l):
  return [ item for sublist in l for item in sublist ]
