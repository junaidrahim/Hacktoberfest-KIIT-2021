def calculate(row_start, row_end, col_start, col_end, row, col, type = 'r', base_add = 1000, size = 2):
    if type == 'r':
        print('Base address + ((number of full rows*number of columns) + number of partial columns)*size of data type')
        print('{} + (({} - {} + 1)x({} - {} + 1) + ({} - {} + 1))x{}'.format(base_add, row -1, row_start, col_end, col_start, col-1,col_start, size))
        print('{} + (({})x({}) + ({}))x{}'.format(base_add, row - row_start, col_end - col_start +1, col - col_start, size))
        print('{} + ({})x{}'.format(base_add, (row - row_start)*(col_end - col_start + 1) + (col - col_start), size))
        print('{} + {}'.format(base_add, ((row - row_start)*(col_end- col_start+1) + (col - col_start))* size))
        print('{}'.format(base_add + ((row - row_start)*(col_end- col_start+1) + (col - col_start))* size))

    else:
        print('Base address + ((number of full colums*number of rows) + number of partial rows)*size of data type')
        print('{} + (({} - {} + 1)x({} - {} + 1) + ({} - {} + 1))x{}'.format(base_add, col -1, col_start, row_end, row_start, row-1,row_start, size))
        print('{} + (({})x({}) + ({}))x{}'.format(base_add, col - col_start, row_end - row_start +1, row - row_start, size))
        print('{} + ({})x{}'.format(base_add, (col- col_start)*(row_end - row_start + 1) + (row - row_start), size))
        print('{} + {}'.format(base_add, ((col - col_start)*(row_end- row_start+1) + (row - row_start))* size))
        print('{}'.format(base_add + ((col - col_start)*(row_end- row_start+1) + (row - row_start))* size))

row_start = int(input("Enter starting row index : "))
row_end = int(input("Enter ending row index : "))
col_start = int(input("Enter starting column index : "))
col_end = int(input("Enter ending column index : "))
row = int(input("Enter row index to be calculated : "))
col = int(input("Enter column index to be calculated : "))
type = input("Enter r/c for row/col major : ")
base_add=int(input("Enter base address : "))
size=int(input("Enter size of data type : "))

calculate(row_start, row_end, col_start, col_end, row, col, type, base_add, size)
