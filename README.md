# 回帰パラメータの計算

## 計算式
$$
\begin{align}
  \beta_0 &= y_{avg} - \beta_1 x_{avg} \\
  \beta_1 &= { \sum_{i=1}^n x_i y_i - n x_{avg} y_{avg} \over \sum_{i=1}^n x_i^2 - n x_{avg}^2 }
\end{align}
$$

## コンパイル
`make`

## 実行
`make run`