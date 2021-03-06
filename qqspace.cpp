Unix/Linux操作系统下的C/C++项目的开发
网络编程，Linux下的mysql开发
TCP/IP协议及编程
熟悉互联网应用协议
面向对象的大型分布式系统设计与开发
中间件的技术以及基于中间件的开发模式


操作系统：
进程管理与调度、
内存管理、
并发编程与同步、
高效的IO

计算机网络：
理解如何在底层有丢包、重包、乱序的条件下设计出可靠的网络协议
更难一点是这个可靠协议能达到“既能充分利用带宽，又能做到足够公平（并发连接大致平均分享带宽）

并发编程：
掌握 mutex、condition variable 的正确用法
避免误用（例如防止 busy-waiting 和 data race）


注意识别过时的知识。比方说《操作系统》讲磁盘IO调度往往会讲电梯算法，但是现在的磁盘普遍内置了这一功能（NCQ），无需操作系统操心了。
类似的例子还有《计算机体系结构》中可能会讲 RISC CPU 流水线中的 delay slot，现在似乎也都废弃了。
《计算机网络》中类似的情况也不少，首先是 OSI 七层模型已经被证明是扯淡的，现在国外流行的教材基本都按五层模型来讲（Internet protocol suite），
如果你的教材还郑重其事地讲 OSI （还描绘成未来的希望），扔了换一本吧。
其次，局域网层面，以太网一家独大（几乎成了局域网的代名词），FDDI/Token ring/ATM 基本没啥公司在用了。
就说以太网，现在也用不到 CSMA/CD 机制（因为 10M 的同轴电缆、10M/100M 的 hub 都过时了，交换机也早就普及了），
因此碰撞检测算法要求“以太网的最小帧长大于最大传播延迟的二倍”这种知识点了解一下就行了。


注意分清知识的层次：
学东西是要用的，在某些层次上（并不是自己的主战场的方面）并不需要成为专家，




书：
Posix多线程程序设计
https://computing.llnl.gov/tutorials/pthreads/
