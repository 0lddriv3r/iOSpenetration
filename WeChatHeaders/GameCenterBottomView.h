//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate.h"

@class MMWebImageView, NSString;

@interface GameCenterBottomView : MMUIView <MMWebImageViewDelegate>
{
    BOOL _showBottomImage;
    id <GameCenterBottomViewDelegate> _delegate;
    NSString *_bottomImageUrl;
    MMWebImageView *_bottomImageView;
    MMUIView *_feedBackView;
}

@property(retain, nonatomic) MMUIView *feedBackView; // @synthesize feedBackView=_feedBackView;
@property(retain, nonatomic) MMWebImageView *bottomImageView; // @synthesize bottomImageView=_bottomImageView;
@property(retain, nonatomic) NSString *bottomImageUrl; // @synthesize bottomImageUrl=_bottomImageUrl;
@property(nonatomic) BOOL showBottomImage; // @synthesize showBottomImage=_showBottomImage;
@property(nonatomic) __weak id <GameCenterBottomViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)feedBackButtonClicked;
- (void)layoutSubviews;
- (void)setBottomStyle:(BOOL)arg1 FeedBackTitle:(id)arg2 BottomImageUrl:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
