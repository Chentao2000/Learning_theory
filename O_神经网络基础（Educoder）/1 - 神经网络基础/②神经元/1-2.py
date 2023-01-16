import torch
import numpy as np

def linear(X,w,b):
    """
    线性神经元
    :param X: 训练数据。形状为[ batch_size, num_inputs ]
    :param w: 权值。形状为[ num_inputs,1]
    :param b: 偏置项。形状为[ 1 ]
    :return: 线性计算结果
    """
    y = torch.mm(X,w) + b
    return y

