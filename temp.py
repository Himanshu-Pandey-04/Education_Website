import re

Str = """#include <map>
#include <set>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <bitset>
#include <vector>
#include <ctime>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <cassert>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>"""

print(re.findall('<([\s\S]+?)>', Str))