//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ImageScrollViewDelegate.h"

@class ImageScrollView, NSString, UIImage;

@interface SettingLastHeadImgViewController : MMUIViewController <ImageScrollViewDelegate>
{
    id <SettingLastHeadImgViewControllerDelegate> _delegate;
    UIImage *_originalImage;
    ImageScrollView *_scrollView;
}

@property(retain, nonatomic) ImageScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIImage *originalImage; // @synthesize originalImage=_originalImage;
@property(nonatomic) __weak id <SettingLastHeadImgViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)onPhotoSave;
- (void)operate;
- (void)cancel;
- (void)use;
- (void)viewDidLayoutSubviews;
- (void)initButton;
- (void)initScrollViewAndImageView;
- (void)initView;
- (void)viewDidLoad;
- (id)initWithImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

