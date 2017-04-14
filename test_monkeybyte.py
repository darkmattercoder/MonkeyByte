""" test module to test MonkeyByte using pytest """
import binarycalculator

BC = binarycalculator.BinCalc()

TESTVAL = 1337
TESTVAL_HEXSTR = "539"
TESTVAL_BITSTR = "010100111001"

def test_value_assignment():
    """ test if variable has been assigned """
    BC.currentValue = TESTVAL
    assert BC.currentValue == TESTVAL

def test_hex():
    """ get current value as hex """
    BC.currentValue = TESTVAL
    assert BC.hex() == TESTVAL_HEXSTR
