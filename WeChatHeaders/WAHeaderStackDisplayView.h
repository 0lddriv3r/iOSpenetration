//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray;

@interface WAHeaderStackDisplayView : MMUIView
{
    float _coverGap;
    NSMutableArray *_headerViews;
}

@property(retain, nonatomic) NSMutableArray *headerViews; // @synthesize headerViews=_headerViews;
@property(nonatomic) float coverGap; // @synthesize coverGap=_coverGap;
- (void).cxx_destruct;
- (void)orderHeaderViews;
- (void)resetHeaderViewsPosition;
- (void)fitHeaderViewCount:(unsigned int)arg1;
- (void)fillWithHeaderImageUrls:(id)arg1 animated:(BOOL)arg2;
- (float)getHeight;
- (float)getWidth;
- (id)init;

@end

