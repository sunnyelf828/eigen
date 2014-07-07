// This file is part of Eigen, a lightweight C++ template library
// for linear algebra.
//
// Copyright (C) 2014 Benoit Steiner <benoit.steiner.goog@gmail.com>
//
// This Source Code Form is subject to the terms of the Mozilla
// Public License v. 2.0. If a copy of the MPL was not distributed
// with this file, You can obtain one at http://mozilla.org/MPL/2.0/.

#ifndef EIGEN_CXX11_TENSOR_TENSOR_FORWARD_DECLARATIONS_H
#define EIGEN_CXX11_TENSOR_TENSOR_FORWARD_DECLARATIONS_H

namespace Eigen {

template<typename Scalar_, std::size_t NumIndices_, int Options_ = 0> class Tensor;
template<typename Scalar_, typename Dimensions, int Options_ = 0> class TensorFixedSize;
template<typename PlainObjectType, int Options_ = Unaligned> class TensorMap;
template<typename Derived, int AccessLevel = internal::accessors_level<Derived>::value> class TensorBase;

template<typename NullaryOp, typename PlainObjectType> class TensorCwiseNullaryOp;
template<typename UnaryOp, typename XprType> class TensorCwiseUnaryOp;
template<typename BinaryOp, typename LeftXprType, typename RightXprType> class TensorCwiseBinaryOp;
template<typename IfXprType, typename ThenXprType, typename ElseXprType> class TensorSelectOp;
template<typename XprType> class TensorReductionOp;
template<typename Dimensions, typename LeftXprType, typename RightXprType> class TensorContractionOp;
template<typename Dimensions, typename InputXprType, typename KernelXprType> class TensorConvolutionOp;
template<typename NewDimensions, typename XprType> class TensorReshapingOp;
template<typename StartIndices, typename Sizes, typename XprType> class TensorSlicingOp;
template<typename LeftXprType, typename RightXprType> class TensorAssignOp;

template<typename XprType> class TensorEvalToOp;
template<typename XprType> class TensorForcedEvalOp;

template<typename ExpressionType, typename DeviceType> class TensorDevice;
template<typename Derived, typename Device> struct TensorEvaluator;

namespace internal {
template<typename Expression, typename Device, bool Vectorizable> class TensorExecutor;
}  // end namespace internal

}  // end namespace Eigen

#endif // EIGEN_CXX11_TENSOR_TENSOR_FORWARD_DECLARATIONS_H
