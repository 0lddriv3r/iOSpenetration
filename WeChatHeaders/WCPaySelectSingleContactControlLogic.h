//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "JSApiSelectContactsViewControllerDelegate.h"
#import "JSApiSelectSessionViewControllerDelegate.h"

@class JSApiSelectSessionViewController;

@interface WCPaySelectSingleContactControlLogic : WCPayControlLogic <JSApiSelectContactsViewControllerDelegate, JSApiSelectSessionViewControllerDelegate>
{
    BOOL _pushVC;
    BOOL _onlyShowContactList;
    id <WCPaySelectSingleContactControlLogicDelegate> _delegate;
    JSApiSelectSessionViewController *_selectSessionVC;
}

@property(retain, nonatomic) JSApiSelectSessionViewController *selectSessionVC; // @synthesize selectSessionVC=_selectSessionVC;
@property(nonatomic) BOOL onlyShowContactList; // @synthesize onlyShowContactList=_onlyShowContactList;
@property(nonatomic) BOOL pushVC; // @synthesize pushVC=_pushVC;
@property(nonatomic) __weak id <WCPaySelectSingleContactControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnJSApiSelectSessionViewControllerNewSession;
- (void)OnJSApiSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned long)arg2;
- (BOOL)OnJSApiSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectSessionViewControllerBack;
- (void)OnJSApiSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned long)arg2;
- (BOOL)OnJSApiSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnJSApiSelectContactsViewControllerBack;
- (void)WCPayViewControllerDidBeRemoved:(id)arg1;
- (void)MMUIViewControllerDidBeRemoved:(id)arg1;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

@end

