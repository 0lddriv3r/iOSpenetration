//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMHeadImageView.h"

@class UIImage, UIImageView;

@interface MMMaskHeadImageView : MMHeadImageView
{
    UIImageView *_maskFrameView;
    UIImage *_maskFrameImg;
    struct CGSize _maskFrameSize;
    UIImage *_maskHLFrameImg;
}

@property(retain, nonatomic) UIImage *maskHLFrameImg; // @synthesize maskHLFrameImg=_maskHLFrameImg;
@property(nonatomic) struct CGSize maskFrameSize; // @synthesize maskFrameSize=_maskFrameSize;
@property(retain, nonatomic) UIImage *maskFrameImg; // @synthesize maskFrameImg=_maskFrameImg;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithUsrName:(id)arg1 headImgUrl:(id)arg2 bAutoUpdate:(BOOL)arg3 bRoundCorner:(BOOL)arg4;

@end
