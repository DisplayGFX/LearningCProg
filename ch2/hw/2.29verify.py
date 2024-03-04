import subprocess

# Define all six orientations of the three inputs
possible_orderings = [
    (1, 2, 3),
    (1, 3, 2),
    (2, 1, 3),
    (2, 3, 1),
    (3, 1, 2),
    (3, 2, 1)
]

def run_program(inputs):
    process = subprocess.Popen(["./2.29"], stdin=subprocess.PIPE, stdout=subprocess.PIPE, stderr=subprocess.PIPE, text=True)
    input_text = f"{inputs[0]}\n{inputs[1]}\n{inputs[2]}\n"
    output, errors = process.communicate(input=input_text)
    return output, errors

# Execute the program with all orientations
results = [run_program(orientation)[0][83:] for orientation in possible_orderings]

print(results)