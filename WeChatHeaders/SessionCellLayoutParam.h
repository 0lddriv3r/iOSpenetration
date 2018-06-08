//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SessionCellLayoutParam : NSObject
{
    float cellHeight;
    float headImgLeftMargin;
    float headImgTopMargin;
    float nameLabelTopMargin;
    float nameLabelBottomMargin;
    float nameLabelLeftMargin;
    float nameLabelHeight;
    float statusImgRightMargin;
    float timeLabelRightMargin;
    float chatNotPushViewRightMargin;
    struct CGSize headImgSize;
}

+ (id)defaultSessionCellLayoutParam;
+ (id)layoutParamForCellStyle:(id)arg1 expectedHeight:(float)arg2;
+ (id)layoutParamForCellStyle:(id)arg1;
@property(nonatomic) float chatNotPushViewRightMargin; // @synthesize chatNotPushViewRightMargin;
@property(nonatomic) float timeLabelRightMargin; // @synthesize timeLabelRightMargin;
@property(nonatomic) float statusImgRightMargin; // @synthesize statusImgRightMargin;
@property(nonatomic) struct CGSize headImgSize; // @synthesize headImgSize;
@property(nonatomic) float nameLabelHeight; // @synthesize nameLabelHeight;
@property(nonatomic) float nameLabelLeftMargin; // @synthesize nameLabelLeftMargin;
@property(nonatomic) float nameLabelBottomMargin; // @synthesize nameLabelBottomMargin;
@property(nonatomic) float nameLabelTopMargin; // @synthesize nameLabelTopMargin;
@property(nonatomic) float headImgTopMargin; // @synthesize headImgTopMargin;
@property(nonatomic) float headImgLeftMargin; // @synthesize headImgLeftMargin;
@property(nonatomic) float cellHeight; // @synthesize cellHeight;

@end

