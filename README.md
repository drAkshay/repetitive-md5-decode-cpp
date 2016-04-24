# repetitive-md5-decode-cpp

#### to decode secret email which was generated by repetitively applying nested md5 to a given user email address, and an increasing arbitrary string

##PROBLEM STATEMENT

Find the secret email address hashed below:

"............" (removed for sake of privacy) 


First, we generated a series of string prefixes with lengths increasing by 2. For example, if our secret email address was helloworld@xyz.com, we would generate:

he
hell
hellow
hellowor
...

helloworld@xyz.com

Then, for every prefix s, we computed the following hash J:

md5(md5(e) + s + md5(s))	[where + is the string concatenation operator and e is your email address].


Finally, we concatenated all hash strings J to form the long hash above!

For example, for helloworld@xyz.com,
we would compute:

md5(md5('user@gmail.com') + 'he' + md5('he')) + 
md5(md5('user@gmail.com') + 'hell' + md5('hell')) + 
md5(md5('user@gmail.com') + 'hellow' + md5('hellow')) + 

...



For the sake of simplicity, you can assume that our email address only contains alphanumeric characters and these 4 characters: _.@+

After solving the challenge, you should have a decoded email address.

Good Luck!
