import sqlite3

conn = sqlite3.connect('iTunesStored.sqlitedb')
cur = conn.cursor()
print("Opened database successfully")

# 获取表名
cur.execute("SELECT name FROM sqlite_master WHERE type='table'")
Tables = cur.fetchall() # Tables 为元组列表

cursor = cur.execute("SELECT * from {}".format('ABPersonFullTextSearch_content')) # ABPerson
with open('data_ABPersonFullTextSearch_content.txt', 'w') as f:
	f.write('id\tname\tphone\n')
	for row in cursor:
		id = row[0]
		name = row[1]
		phone = row[16]
		try:
			phone = phone.split(' ')[0]
		except Exception as e:
			phone = 'None'
		f.write(str(id) + '\t' + str(name) + '\t' + str(phone) + '\n')

# for table in Tables:
	# tbl_name = Tables[0][0]
	# tbl_name = table[0]
	# print('表名')
	# print(tbl_name)

	# cur.execute("SELECT * FROM {}".format(tbl_name))
	# col_name_list = [tuple[0] for tuple in cur.description]
	# print('表列名')
	# print(col_name_list)

	# cur.execute("PRAGMA table_info({})".format(tbl_name))
	# print('表结构信息')
	# print(cur.fetchall())

	# cursor = cur.execute("SELECT key, value from {}".format(tbl_name))
	# for row in cursor:
		# print("ID = " + row[0])
		# print("SALARY = " + row[1])

print("Operation done successfully")
conn.close()