//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"

@class MMLoadingView, NSString;

@interface BlockViewController : MMUIViewController <UIAlertViewDelegate>
{
    MMLoadingView *_loadingView;
    NSString *_viewTitle;
    NSString *_failTips;
    NSString *_loadingWording;
    id <BlockViewControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <BlockViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *loadingWording; // @synthesize loadingWording=_loadingWording;
@property(retain, nonatomic) NSString *failTips; // @synthesize failTips=_failTips;
@property(retain, nonatomic) NSString *viewTitle; // @synthesize viewTitle=_viewTitle;
- (void).cxx_destruct;
- (void)onReturn;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)showFailView;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

