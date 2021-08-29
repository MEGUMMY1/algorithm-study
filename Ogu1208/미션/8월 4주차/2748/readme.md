### `반복문, if문`
- n<=90이면 int값의 범위를 벗어나므로 long형 사용
- 그냥 반복과 재귀함수를 이용하는 방법 2가지가 있음, 나는 전자 사용
- n==1일때의 case 구분
- ❌ 1️⃣ 오답 : 자료형을 생각하지 않았음
- ❌ 2️⃣ 오답 : n==1일 case의 경우 생각하지 않았음

```java

  long f1 = 1, f2 = 0, result = 0;
	
  if(n==1)
			System.out.println(1);
		
		else {
			for(int i = 1; i < n; i++) {
				result = f1 + f2;
				f2 = f1;
				f1 = result;
			}
			System.out.println(result);
		}
    
```


### ❗ 백준 제출 Java 주의점 ❗
- `class의 경우 Main으로 이름을 설정해야 컴파일 오류가 나지 않음`



