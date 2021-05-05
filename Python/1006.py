section1 = input()
section2 = input()
section3 = input()

if section1 == 'black' and section2 == 'YELLOW' and section3 == 'black':
    print('black', 'YELLOW', 'black', sep='\n')
elif section1 == 'black' and section2 == 'black' and section3 == 'green':
    print('black', 'black', 'GREEN', sep='\n')
elif section1 == 'black' and section2 == 'black' and section3 == 'GREEN':
    print('black', 'yellow', 'black', sep='\n')
elif section1 == 'black' and section2 == 'yellow' and section3 == 'black':
    print('red', 'black', 'black', sep='\n')
elif section1 == 'red' and section2 == 'black' and section3 == 'black':
    print('red', 'yellow', 'black', sep='\n')
elif section1 == 'red' and section2 == 'yellow' and section3 == 'black':
    print('black', 'black', 'green', sep='\n')
else:
    print('error')
    