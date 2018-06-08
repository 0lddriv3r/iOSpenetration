//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate.h"

@class ForwardMessageLogicController, NSString;

@interface WARedEnvelopesShareViewController : MMUIViewController <ForwardMessageLogicDelegate>
{
    id <WARedEnvelopesShareViewControllerDelegate> m_delegate;
    ForwardMessageLogicController *_forwardLogic;
}

@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(nonatomic) __weak id <WARedEnvelopesShareViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (id)getCurrentViewController;
- (void)shareBtnClick;
- (void)doneBtnClick;
- (void)onReturn;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

