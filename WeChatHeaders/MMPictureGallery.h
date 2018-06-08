//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIScrollViewDelegate.h"

@class MMScrollView, NSArray, NSString;

@interface MMPictureGallery : MMUIView <UIScrollViewDelegate>
{
    MMScrollView *_scrollView;
    NSArray *_imageUrlArray;
    float _pictureWidht;
    float _pictureHeight;
    float _picturePadding;
    float _leftMargin;
    id <MMPictureGalleryDelegate> _delegate;
}

@property(nonatomic) __weak id <MMPictureGalleryDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) float leftMargin; // @synthesize leftMargin=_leftMargin;
@property(nonatomic) float picturePadding; // @synthesize picturePadding=_picturePadding;
@property(nonatomic) float pictureHeight; // @synthesize pictureHeight=_pictureHeight;
@property(nonatomic) float pictureWidht; // @synthesize pictureWidht=_pictureWidht;
- (void).cxx_destruct;
- (void)onSingleTap:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (float)getSlotOffset:(unsigned int)arg1;
- (unsigned int)checkSlotByOffset:(float)arg1 andVelocity:(struct CGPoint)arg2;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setImageUrlArray:(id)arg1;
- (id)getImageViewAtIndex:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
