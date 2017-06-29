The following is some introduce:
1. different programs introduce:
	TKO: in the base of the paper, I add the strategy that use single item utility to improve minimum threshold
	TKO+: in the base of TKO, I use the LA_Prune strategy and EUCS strategy.

Of course, you can delete the EPB strategy, I think this strategy will influence the efficiency of the algorithm.

2. folders introduce:
	source:the source code, you can change the pub_def.h to get different programs.


3. parameter introduce:
	in the main.cpp, I give the example for parameter of test file
	-D: the database file name
	-E: the price file name
	-O: the result file name
	-N: the number of item
	-W: the max length of transaction
	-#: the number of transaction
	-T: the top-k

4. the format of database file and price file
	database file: for the first three line, it indicates the number of transaction, the number of item, and the max length of transaction, for the next line, the structure is [tid currentLineCounts item1 item1Quantity item2 item2Quantity ......]
	price file: it indicates the unit price of every item