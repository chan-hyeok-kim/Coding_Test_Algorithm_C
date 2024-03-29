**2-3일에 한 번 정도로 질문이 오던 예전과 달리 요즘은 거의 하루에 2-3개 정도 질문이 오는 느낌입니다. 그만큼 강의를 열심히 공부하시는 분이 많다는 뜻이니 감사하게 생각하지만 한편으로는 질문에 답변을 드리기 위해 쏟는 시간이 점점 늘어나고 있어 다소 부담이 됩니다. 앞으로는 아래의 가이드를 정확하게 따라간 질문에 대해서만 답변을 드리고 그렇지 않은 질문은 먼저 가이드에 맞게 수정을 요청하려고 합니다.**

# 좋은 질문을 하기 위한 가이드

질문을 통해 제 강의에서 설명이 부족한 부분을 보충할 수 있고, 다른 사람이 질문/답변 내용을 참고할 때 이해에 도움이 되기도 하기 때문에 최대한 성실하게 답변을 드리고자 합니다. 그리고 질문을 통해 제 강의의 완성도가 올라간다고 생각하기 때문에 질문해주시는 것에 대해 감사하게 생각합니다.

그런데 질문을 할 때 조금만 신경을 써주시면 제 입장에서 답변을 더 편하게 드릴 수 있어서 부탁을 드리고자 합니다.

질문 가이드의 대원칙은 **답변자가 해야 할 일을 질문자가 최대한 덜어준다**입니다.

## A. 공통 원칙

### 1. 답변을 받은 후 댓글을 지우지 마세요.

제가 질문에 대한 답변을 최대한 알차게 드리고자 하는 이유는 질문자님을 위한 것도 있지만 추후에 강의를 볼 다른 사람들에게도 도움이 될 수 있기 때문입니다. 또 댓글을 그대로 두는건 답변자에 대한 최소한의 예의라고 생각합니다. 답변을 받은 후 댓글을 지우지 마시고, 타인에게 공개하기 싫은 개인적인 질문이면 그냥 애초에 `admin@encrypted.gg` 메일로 보내주세요.

### 2. 질문은 최대한 자세하고 명료하게 해주세요.

`오류가 나요`, `답이 이상해요`와 같은 애매한 표현을 쓰지 말고 `예제는 맞는데 런타임 에러가 나요`, `입력 @@에 대해 답이 @@여야 하는데 @@가 나와요`와 같은 정확한 표현을 사용해주세요.

### 3. 질문은 해당 강의의 블로그 글이나 유튜브 영상의 댓글로 달아주세요

Issues나 블로그 방명록 같은 다른 곳에 질문을 남기면 여러 단원의 내용이 중구난방으로 섞여서 다른 사람이 질문/답변 내용을 참고하기가 힘듭니다.

## B. 강의 내용에 관한 질문을 하고 싶을 때

### 1. 본문에 있는 내용에 관한 질문을 할 때에는 (블로그)슬라이드 번호 혹은 (유튜브)시간을 같이 알려주세요.

### 2. 코드에 관한 질문을 할 때 한 두줄 짜리 아주 단순한 코드가 아니라면 질문주신 사항을 바로 확인할 수 있는 `실행 가능한 코드` 혹은 (제출한 코드라면) `제출 링크를` 주세요. `제출 링크`를 올렸다면 전체 코드는 댓글에 붙여넣지 마세요. 

**(안좋은 예)**

25p 곱셈 문제 코드에서 POW 함수를 이렇게 바꾸면 왜 시간초과가 나나요?
```cpp
ll POW(ll a, ll b, ll m){
  if(b==1) return a % m;
  return a * POW(a, b-1, m);
}
```

**(좋은 예)**

25p 곱셈 문제 코드에서 POW 함수를 이렇게 바꾸면 왜 시간초과가 나나요? 제출 링크는 `boj.kr/xxxx`입니다.

(`boj.kr/xxxx`의 내용)
```cpp
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll POW(ll a, ll b, ll m){
  if(b==1) return a % m;
  return a * POW(a, b-1, m);
}

int main(void){
  ios::sync_with_stdio(0);
  cin.tie(0);
  ll a,b,c;
  cin >> a >> b >> c;
  cout << POW(a,b,c);
}
```

## C. 코드의 틀린 점을 찾아달라고 부탁하고 싶을 때

### 1. 적어도 예제는 통과하는지 확인하고, 또 질문 게시판 혹은 블로그/유튜브 댓글에 있는 다양한 반례들을 확인해본 뒤에도 여전히 답이 안보이면 저한테 질문해주세요.

할 수 있는 최대한의 노력을 한 후에 질문을 해달라는 의미입니다. 적어도 예제조차 통과하지 않거나 질문 게시판에서 반례를 찾아서 어떤 입력에 대해 답이 틀렸는지를 알 수 있는 상황에서는 스스로 해결할 수 있어야 합니다.

### 2. 말로만 상황을 설명하거나 일부 코드만 달아놓지 말고 BOJ 제출 링크를 주세요. 전체 코드는 댓글에 붙여넣지 마세요.

(예를 들어 `BFS에서 큐 대신 야매 연결 리스트를 썼는데 시간 초과가 나요`와 같이) 말로만 상황을 설명하면 실제 코드를 정확하게 짰는지 알 수가 없고, 정답 코드에서 자신이 고쳤다고 주장하는 일부 코드만 달아두면 정작 다른 곳에 문제가 있어 헛고생을 하는 일이 생각보다 자주 발생합니다. 전체 코드와 제출 결과를 확인할 수 있게 `BOJ 제출 링크`를 보내주세요. `https://www.acmicpc.net/source/XXXX` 주소 대신 `공유` 버튼을 눌러서 `http://boj.kr/XXXX` 형식의 주소를 알려주세요. 

### 3. 코드는 최대한 정리를 하고 주석을 상세하게 달아주세요.

코드가 너무 꼬여있고 로직을 한 눈에 알아보기 힘들면 제가 답변을 제대로 드리기가 힘듭니다. 답변을 정확하게 받을 확률을 높이고 싶다면 코드의 로직을 최대한 정리하시고 주석을 상세하게 달아주세요. Github에 있는 정답 코드와 변수명/코드의 로직을 맞춰보는 것도 도움이 될 수 있고, 그 과정에서 스스로 문제점을 찾을 수도 있습니다.

### 4. 유튜브의 경우 댓글에 링크가 포함되어 있으면 스팸으로 오인해 삭제를 하기도 하니 링크를 달았는데 댓글이 삭제되었다면 링크 대신 제출번호를 알려주셔도 됩니다.

예를 들어 채점 링크가 `https://www.acmicpc.net/source/28096396`일 때 제출 번호는 `28096396`번입니다. 맞왜틀을 하다가 유튜브 댓글로 질문을 할 경우에는 위의 내용을 참고해 내용을 채운 후에 `제출 번호는 28096396번입니다`와 같은 말을 추가해주시면 됩니다.

## 마무리

세상에 나쁜 질문은 `질문해도 되나요?`밖에 없다고 알고 있습니다. 앞으로도 질문 많이 해서 제 강의를 같이 채워주세요. 감사합니다🤣
