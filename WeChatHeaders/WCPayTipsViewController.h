//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTipsViewController.h"

@class MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UIView;

@interface WCPayTipsViewController : MMTipsViewController
{
    unsigned int _tipsType;
    NSString *_tipsTitle;
    NSString *_tipsContent;
    NSString *_tipsImgName;
    NSMutableArray *_btnTitleArray;
    NSMutableArray *_btnArray;
    UIButton *_backgroundBtn;
    UIImageView *_contentBg;
    UIImageView *_tipsImgView;
    UIView *_tipsDesView;
    UIView *_contentView;
    MMUILabel *_tipsTitleLabel;
    MMUILabel *_tipsContentLabel;
    UIView *_customView;
    BOOL _isBlurBg;
    UIView *_blurView;
    BOOL bIsForbidCancelBtn;
    BOOL _allGreenButton;
    unsigned int m_tipsImageLocation;
}

@property(nonatomic) BOOL allGreenButton; // @synthesize allGreenButton=_allGreenButton;
@property(retain, nonatomic) UIView *customView; // @synthesize customView=_customView;
- (void)setM_tipsImageLocation:(unsigned int)arg1;
- (unsigned int)m_tipsImageLocation;
- (id)m_imageName;
- (void)setBIsForbidCancelBtn:(BOOL)arg1;
- (BOOL)bIsForbidCancelBtn;
- (void)setM_tipsContentLabel:(id)arg1;
- (id)m_tipsContentLabel;
- (void)setM_tipsTitleLabel:(id)arg1;
- (id)m_tipsTitleLabel;
- (void).cxx_destruct;
- (id)getContentView;
- (id)create6Or6pFirstLoginView;
- (id)bulidNSAttributedStringText:(id)arg1;
- (void)removeAllBtn;
- (void)setButtonsEnable:(BOOL)arg1;
- (void)onClickBtn:(id)arg1;
- (void)updateSubViewsFrame;
- (id)getBtnAtIndex:(unsigned long)arg1;
- (void)createContainImgTips;
- (id)getContentImageView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)setM_imageName:(id)arg1;
- (void)hideTips;
- (void)configBlurBgOnView:(id)arg1;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andBtn:(id)arg3;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4;
- (id)initIphone6LoginTipsWithTitle:(id)arg1 andContent:(id)arg2 andCancelText:(id)arg3;

@end

