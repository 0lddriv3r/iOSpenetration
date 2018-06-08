//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "WCCardCodeAnimatorDelegate.h"

@class NSString, UIView, WCCardCodeAnimator, WCCardDataCardInfo, WCCardDataCardTPInfo;

@interface WCCardTicketCodeCellView : MMUIView <WCCardCodeAnimatorDelegate>
{
    WCCardDataCardTPInfo *_cardTpInfo;
    WCCardDataCardInfo *_cardInfo;
    WCCardCodeAnimator *_codeAnimator;
    UIView *_codeContainView;
    id <WCCardTicketCodeCellViewDelegate> _delegate;
}

+ (float)heightForCardSource:(id)arg1 viewWidth:(float)arg2;
- (void).cxx_destruct;
- (void)codeAnimatorWillExitFullScreen:(id)arg1;
- (void)codeAnimatorWillBecomeFullScreen:(id)arg1;
- (void)fieldClicked:(id)arg1;
- (id)createCodeNumView;
- (id)getCodeViewWithCode:(id)arg1;
- (id)createSecondaryFieldView;
- (void)setupView;
- (id)initWithViewWidth:(float)arg1 cardSource:(id)arg2 delegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
