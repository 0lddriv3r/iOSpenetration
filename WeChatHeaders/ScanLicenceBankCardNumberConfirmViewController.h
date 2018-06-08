//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMTableViewInfo, MMUILabel, NSString, ScanLicenceBankCardEditView, UIImage, UIImageView;

@interface ScanLicenceBankCardNumberConfirmViewController : MMUIViewController <MMTableViewInfoDelegate, UIScrollViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    BOOL _didRenderViews;
    id <ScanLicenceBankCardNumberConfirmViewControllerDelegate> _m_delegate;
    NSString *_cardNumStr;
    UIImage *_cardImage;
    ScanLicenceBankCardEditView *_editBankNumView;
    UIImageView *_cardImageView;
    MMUILabel *_label;
}

@property(retain, nonatomic) MMUILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(retain, nonatomic) ScanLicenceBankCardEditView *editBankNumView; // @synthesize editBankNumView=_editBankNumView;
@property(retain, nonatomic) UIImage *cardImage; // @synthesize cardImage=_cardImage;
@property(copy, nonatomic) NSString *cardNumStr; // @synthesize cardNumStr=_cardNumStr;
@property(nonatomic) __weak id <ScanLicenceBankCardNumberConfirmViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)confirmAction:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLayoutSubviews;
- (id)getContainerView;
- (void)setupViewsIfNeed;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)onCancel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

