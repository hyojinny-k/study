str = 'X_DSPAM-Confidence:0.8475'
colon = str.find(':') + 1
f = float(str[colon:])
print(f)