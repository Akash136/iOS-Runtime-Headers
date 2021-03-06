/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SIMSetupSupport.framework/SIMSetupSupport
 */

@interface TSCellularPlanAddingViewController : BFFSplashController <TSSetupFlowItem> {
    <TSSIMSetupFlowDelegate> * _delegate;
    bool  _installCompleted;
    unsigned long long  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property <TSSIMSetupFlowDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool installCompleted;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithTitle:(id)arg1 description:(id)arg2 type:(unsigned long long)arg3;
- (bool)installCompleted;
- (void)planInfoDidUpdate:(id)arg1 planListError:(id)arg2;
- (void)prepare:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInstallCompleted:(bool)arg1;
- (void)topLeftButtonTapped;
- (unsigned long long)type;
- (void)viewDidLoad;

@end
