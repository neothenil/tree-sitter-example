import sys


def convert_to_lower_case(file):
    with open(file) as f:
        content = f.read()
    lower_case_content = content.lower()
    with open(file, 'w') as f:
        f.write(lower_case_content)


if __name__ == "__main__":
    convert_to_lower_case(sys.argv[1])
