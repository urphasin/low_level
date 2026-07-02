import math
from fractions import Fraction

def solveByCramersRule(equation: list[list]):
    def det2x2(equation: list[list]):
        a = equation[0][0]
        b = equation[0][1]
        c = equation[1][0]
        d = equation[1][1]
        DET = a*d - b*c
        if DET == 0:
            print("Infintely many solutons.")
        return DET
    
    Ax = [
        [equation[0][2], equation[0][1]],
        [equation[1][2], equation[1][1]]
    ]

    By = [
        [equation[0][0], equation[0][2]],
        [equation[1][0], equation[1][2]]
    ]

    try:
        DET = det2x2(equation=equation)
        detAx = det2x2(Ax)
        detBy = det2x2(By)
        solutionX = Fraction(detAx/DET).limit_denominator()
        solutionY = Fraction(detBy/DET).limit_denominator()

        print(f"X = {solutionX}")
        print(f"Y = {solutionY}")
    except ValueError:
        print("Infinitely many solutions")



if __name__ == "__main__":
    equation = "" \
    "3x - 2y = 7\n" \
    "5x + 4y = -1"
    print(equation, end="\n\n")


    equationMatrix = [
        [3, -2, 7],
        [5, 4, -1]
    ]
    print(solveByCramersRule(equation=equationMatrix))
    