import re
import sys

DOXYGEN_COMMENT_REGEX = r'//(/)?|<![CDATA\[|\*+'

def check_doxygen(filename):
    with open(filename, 'r') as f:
        for line_num, line in enumerate(f.readlines()):
            # Check for doxygen comment
            if re.search(DOXYGEN_COMMENT_REGEX, line):
                print(f"{filename}:{line_num}: Doxygen comment found")
            else:
                print(f"{filename}:{line_num}: Missing doxygen comment")

if __name__ == '__main__':
    if len(sys.argv) > 1:
        filename = sys.argv[1]
        check_doxygen(filename)
    else:
        print("Please provide a file to check")
