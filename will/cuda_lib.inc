	
IMPORT(cublasCreate_v2);
IMPORT(cublasDestroy_v2);
IMPORT(cublasIsamax_v2);
IMPORT(cublasSasum_v2);
IMPORT(cublasSdot_v2);
IMPORT(cublasSetMathMode);
IMPORT(cublasSgemm_v2);
IMPORT(cublasSgemv_v2);
IMPORT(cublasSscal_v2);
IMPORT(cudnnActivationBackward);
IMPORT(cudnnActivationForward);
IMPORT(cudnnAddTensor);
IMPORT(cudnnBatchNormalizationBackward);
IMPORT(cudnnBatchNormalizationForwardInference);
IMPORT(cudnnBatchNormalizationForwardTraining);
IMPORT(cudnnConvolutionBackwardBias);
IMPORT(cudnnConvolutionBackwardData);
IMPORT(cudnnConvolutionBackwardFilter);
IMPORT(cudnnConvolutionForward);
IMPORT(cudnnCreate);
IMPORT(cudnnCreateActivationDescriptor);
IMPORT(cudnnCreateConvolutionDescriptor);
IMPORT(cudnnCreateDropoutDescriptor);
IMPORT(cudnnCreateFilterDescriptor);
IMPORT(cudnnCreateLRNDescriptor);
IMPORT(cudnnCreateOpTensorDescriptor);
IMPORT(cudnnCreatePoolingDescriptor);
IMPORT(cudnnCreateRNNDescriptor);
IMPORT(cudnnCreateSpatialTransformerDescriptor);
IMPORT(cudnnCreateTensorDescriptor);
IMPORT(cudnnDeriveBNTensorDescriptor);
IMPORT(cudnnDestroy);
IMPORT(cudnnDestroyActivationDescriptor);
IMPORT(cudnnDestroyConvolutionDescriptor);
IMPORT(cudnnDestroyDropoutDescriptor);
IMPORT(cudnnDestroyFilterDescriptor);
IMPORT(cudnnDestroyLRNDescriptor);
IMPORT(cudnnDestroyOpTensorDescriptor);
IMPORT(cudnnDestroyPoolingDescriptor);
IMPORT(cudnnDestroyRNNDescriptor);
IMPORT(cudnnDestroySpatialTransformerDescriptor);
IMPORT(cudnnDestroyTensorDescriptor);
IMPORT(cudnnDropoutBackward);
IMPORT(cudnnDropoutForward);
IMPORT(cudnnDropoutGetReserveSpaceSize);
IMPORT(cudnnDropoutGetStatesSize);
IMPORT(cudnnFindConvolutionBackwardDataAlgorithm);
IMPORT(cudnnFindConvolutionBackwardFilterAlgorithm);
IMPORT(cudnnFindConvolutionForwardAlgorithm);
IMPORT(cudnnGetTensor4dDescriptor);
IMPORT(cudnnLRNCrossChannelBackward);
IMPORT(cudnnLRNCrossChannelForward);
IMPORT(cudnnOpTensor);
IMPORT(cudnnPoolingBackward);
IMPORT(cudnnPoolingForward);
IMPORT(cudnnSetActivationDescriptor);
IMPORT(cudnnSetConvolution2dDescriptor);
IMPORT(cudnnSetConvolutionMathType);
IMPORT(cudnnSetConvolutionNdDescriptor);
IMPORT(cudnnSetDropoutDescriptor);
IMPORT(cudnnSetFilter4dDescriptor);
IMPORT(cudnnSetFilterNdDescriptor);
IMPORT(cudnnSetLRNDescriptor);
IMPORT(cudnnSetOpTensorDescriptor);
IMPORT(cudnnSetPooling2dDescriptor);
IMPORT(cudnnSetPoolingNdDescriptor);
IMPORT(cudnnSetTensor);
IMPORT(cudnnSetTensor4dDescriptor);
IMPORT(cudnnSetTensorNdDescriptor);
IMPORT(cudnnSoftmaxBackward);
IMPORT(cudnnSoftmaxForward);