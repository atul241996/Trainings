create table DEPT(
deptno tinyint constraint dept_pk primary key,
dname varchar(12),
loc varchar(12));

create table EMP(
empno smallint constraint emp_pk primary key,
ename varchar(12) not null,
job VARCHAR(9),
mgr smallint,
hiredate DATETIME,
sal smallmoney constraint emp_chksal CHECK(sal <= 5000),
comm smallmoney,
deptno tinyint,
constraint emp_dept_fk foreign key(deptno) references dept);

create table SALGRADE(
grade tinyint,
losal smallmoney,
hisal smallmoney);

INSERT INTO DEPT VALUES (10, 'ACCOUNTING', 'NEW YORK');
INSERT INTO DEPT VALUES (20, 'RESEARCH',   'DALLAS');
INSERT INTO DEPT VALUES (30, 'SALES',      'CHICAGO');
INSERT INTO DEPT VALUES (40, 'OPERATIONS', 'BOSTON');

INSERT INTO EMP VALUES
        (7369, 'SMITH','CLERK',7902,'17-DEC-1980',800,NULL,20);
INSERT INTO EMP VALUES
	  (7499, 'ALLEN','SALESMAN',7698,'20-FEB-1981',1600,300,30);
INSERT INTO EMP VALUES
        (7521, 'WARD','SALESMAN',7698,'22-FEB-1981',1250,500,30);
INSERT INTO EMP VALUES
        (7566, 'JONES','MANAGER',7839,'2-APR-1981',2975,NULL,20);
INSERT INTO EMP VALUES
        (7654, 'MARTIN','SALESMAN',7698,'28-SEP-1981',1250,1400,30);
INSERT INTO EMP VALUES
        (7698, 'BLAKE','MANAGER',7839,'1-MAY-1981',2850,NULL,30);
INSERT INTO EMP VALUES
        (7782, 'CLARK','MANAGER',7839,'9-JUN-1981',2450,NULL,10);
INSERT INTO EMP VALUES
        (7788, 'SCOTT','ANALYST',7566,'09-DEC-1982',3000,NULL,20);
INSERT INTO EMP VALUES
        (7839, 'KING','PRESIDENT',NULL,'17-NOV-1981',5000,NULL,10);
INSERT INTO EMP VALUES
        (7844, 'TURNER','SALESMAN',7698,'8-SEP-1981',1500,0,30);
INSERT INTO EMP VALUES
        (7876, 'ADAMS','CLERK',7788,'12-JAN-1983',1100,NULL,20);
INSERT INTO EMP VALUES
        (7900, 'JAMES','CLERK',7698,'3-DEC-1981',950,NULL,30);
INSERT INTO EMP VALUES
        (7902, 'FORD','ANALYST',7566,'3-DEC-1981',3000,NULL,20);
INSERT INTO EMP VALUES
        (7934, 'MILLER','CLERK',7782,'23-JAN-1982',1300,NULL,10);

alter table emp 
add constraint emp_mgr_fk foreign key(mgr) references emp;

 insert into salgrade values(1,700,1200);
 insert into salgrade values(2,1201,1400);
 insert into salgrade values(3,1401,2000);
 insert into salgrade values(4,2001,3000);
 insert into salgrade values(5,3001,9999);