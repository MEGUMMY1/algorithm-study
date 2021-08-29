
# Q_1920 이진탐색
-----------

### `이분탐색 반복문, if문`
----------
- 알고리즘 개념 : `이진탐색` - `반복문`과 `재귀함수` 2가지 방법
- [이진탐색 알고리즘 개념 feat.Java](https://cjh5414.github.io/binary-search/)
<img src="https://blog.kakaocdn.net/dn/chK2vn/btqV2aMJXLb/R4WAO203nzwzOKn4NNthpk/img.png">
- 반복문 사용함

<details>
  <summary> 반복문을 이용한 방법 </summary>

```java

  int BSearch(int arr[], int target) {
    int low = 0;
    int high = arr.length - 1;
    int mid;

    while(low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] > target)
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
    
```
</details>

<details>
  <summary> 재귀함수를 이용한 방법 </summary>

```java

 int BSearchRecursive(int arr[], int target, int low, int high) {
    if (low > high)
        return -1;

    int mid = (low + high) / 2;
    if (arr[mid] == target)
        return mid;
    else if (arr[mid] > target)
        return BSearchRecursive(arr, target, low, mid-1);
    else
        return BSearchRecursive(arr, target, mid+1, high);
  }
    
```
</details>

### Solution)
-------------------
	
- ❌ 1️⃣ 오답 : 처음에 for문의 while문이 돌아가지 않아서 여러번 다시 고쳤지만 계속 실패함. for문 그냥 처음부터 다시 작성했음
- ❌ 2️⃣ 오답 : n==1일 case의 경우 생각하지 않았음

<br>
	
	

	
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



