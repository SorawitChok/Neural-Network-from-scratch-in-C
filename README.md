# Neural Network from scratch in C++

Welcome to the **Neural Network from Scratch in C++** project! This repository features a straightforward implementation of a neural network built entirely from the ground up using C++. Designed to engage AI and machine learning enthusiasts, this project provides a hands-on opportunity to explore the mathematical and programming principles behind neural networks. Whether you're a learner or an experienced developer, you'll gain deeper insights into the inner workings of neural networks and their underlying algorithms.

## Table of Contents
- [Concept & Intuition](#Concept-&-Intuition)
- [Core Components](#Core-Components)
  - [Fully-connected layer](#Fully-connected-layer)
  - [Activation Function](#Activation-Function)
  - [Loss Function](#Loss-Function)
- [Underlying Mathematics](#Underlying-Mathematics)
  - [Forward Propagation](#Forward-Propagation)
  - [Gradient Descent](#Gradient-Descent)
  - [Backward Propagation](#Backward-Propagation)
- [Breaking into Modules](#Breaking-into-Modules)
- [Implementation](#Implementation)
- [License](#License)
- [Contributing](#Contributing)
- [Author](#Author)

## Concept & Intuition
Have you ever wondered what enables humans to breathe, walk, make decisions, respond to stimuli, and ultimately think? The answer lies in the brain and central nervous system, which consists of billions of interconnected neurons. Similarly, artificial neural networks (ANNs) are computational models inspired by the structure of the biological brain and neurons. They consist of interconnected layers of artificial neurons that process information and learn from data, enabling the network to make decisions and predictions.

In this project, we aim to build a neural network from scratch using C++, demystifying the concepts and mathematics behind these models. By manually implementing each component, we gain a deeper understanding of how neural networks operate and how they learn from data.

## Core Components
### Fully-connected layer
The fully-connected layer is arguably one of the most vital constituents of any neural network. The main functionality of this layer is to apply an affine transformation on the incoming data. But what exactly is this fancy term called affine transformation? Simply put, it is just a linear transformation (transforming a vector by multiplying it with a matrix) with a translation (adding another vector to a transformed vector). Mathematically, we can describe the output of this fully-connected layer (or affine transformation) as:
```math
y = Wx + b
```
Where:
- $W$ represents the weight matrix (perform a linear transformation on $x$),
- $x$ is the input vector,
- $b$ is the bias vector (translate $x$),
- $y$ is the output vector.

Although this transformation process is essential for the neural network, it is still very lacking in terms of its power, especially for processing highly complex data. The reason is that the affine transformation operations such as scaling, rotation, and shearing even with the translation still cannot account for the nonlinearity. Why is that? 

let's see an example. Suppose we have a neural network with solely 2 fully-connected layers, then we can write out the equation as follows: 
### Activation Functions
**Sigmoid Function**
```math
\sigma(x)= \frac {1}{1+e^{-x}}
```
**Rectified Linear Unit (ReLU)**
```math
ReLU(x) = max(0,x) = \begin{cases}
        x,&  \text{if } x > 0\\
        0,&   \text{otherwise} 
\end{cases}
```

**Hyperbolic Tangent Function (Tanh)**
```math
tanh(x) = \frac{(e^x − e^{-x})}{(e^x + e^{-x})}
```
### Loss Functions

## Underlying Mathematics

### Forward Propagation
Forward propagation is the process by which input data is passed through the network to generate an output or prediction. The input values will be processed in each layer, and those processed values (output of the previous layer) will be passed as input for the subsequent layer. This process will continue until the data passes through all of the layers.

Let's see an example. Suppose we have the following neural network architecture:

<p align="center">
  <img src="./Images/Forward_propagation_math.png" alt="Forward"/>
</p>

Then, we can write out the forward propagation computation of this network as mathematical equations as follows:
```math
\begin{aligned}
h_1 = w_{h_1x_1}x_1 + w_{h_1x_2}x_2 + b_1 \\
h_2 = w_{h_2x_1}x_1 + w_{h_2x_2}x_2 + b_2 \\
h_3 = w_{h_3x_1}x_1 + w_{h_3x_2}x_2 + b_3 \\
\\
a_1 = \sigma(h_1) \\
a_2 = \sigma(h_2) \\
a_3 = \sigma(h_3) \\
\\
h_o = w_{oa_1}a_1 + w_{oa_2}a_2 + w_{oa_3}a_3 +  b_o \\
y = a_o = \sigma(h_o) \\
\end{aligned}
```


### Gradient Descent
### Backward Propagation

## Breaking into Modules
### Linear layer
Suppose, we have the following neural network linear(dense) layer taking in $i$ number of inputs and producing $j$ number of outputs.

<p align="center">
  <img src="./Images/NN_forward_ex.png" alt="NN"/>
</p>

Then for this particular layer, we can formalize it into a total of $j$ equations below. 
```math
\begin{aligned}
y_1 = w_{11}x_1 + w_{12}x_2 + w_{13}x_3 + ... + w_{1i}x_i + b_1 \\
y_2 = w_{21}x_1 + w_{22}x_2 + w_{23}x_3 + ... + w_{2i}x_i + b_2 \\
y_3 = w_{31}x_1 + w_{32}x_2 + w_{33}x_3 + ... + w_{3i}x_i + b_3 \\
\vdots \\
y_j = w_{j1}x_1 + w_{j2}x_2 + w_{j3}x_3 + ... + w_{ji}x_i + b_j \\
\end{aligned}
```

In matrix form:
```math
\begin{aligned}
\begin{bmatrix} y_1 \\ y_2 \\ y_3 \\ \vdots \\ y_j \end{bmatrix} = \begin{bmatrix} w_{11} & w_{12} & w_{13} & ...  & w_{1i} \\ w_{21} & w_{22} & w_{23} & ... & w_{2i} \\ w_{31} & w_{32} & w_{33} & ... & w_{3i} \\ \vdots & \vdots & \vdots & \vdots & \vdots \\ w_{j1} & w_{j2} & w_{j3} & ... & w_{ji} \end{bmatrix} \begin{bmatrix} x_1 \\ x_2 \\ x_3 \\ \vdots \\ x_i \end{bmatrix} + \begin{bmatrix} b_1 \\ b_2 \\ b_3 \\ \vdots \\ b_j \end{bmatrix} \\
\mathbf{y}_{j \times 1} = W_{j \times i} x_{i \times 1} + b_{j \times 1}
\end{aligned}
```
Where:
- $W_{j \times i}$ represents the weight matrix,
- $x_{i \times 1}$ is the input vector,
- $b_{j \times 1}$ is the bias vector,
- $\mathbf{y}_{j \times 1}$ is the output vector.

## Implementation
### Utility Function
### Layers
### Activation Function
### Loss Function


## License
This code is licensed under the MIT License. See the [LICENSE](LICENSE) file for more details.

## Contributing
Feel free to fork this repository and submit pull requests. Any contributions are welcome!

## Author
This repository was created by [Sorawit Chokphantavee](https://github.com/SorawitChok) and [Sirawit Chokphantavee](https://github.com/SirawitC).
