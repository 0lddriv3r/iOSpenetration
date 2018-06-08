//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UISlider.h"

@class UIColor;

@interface WCNetworkMediaSlider : UISlider
{
    double m_cacheTime;
    BOOL _showCacheProgress;
    UIColor *_frontgroundColor;
    UIColor *_backgroundColor;
    UIColor *_cacheColor;
    float _sliderHeight;
}

@property(nonatomic) BOOL showCacheProgress; // @synthesize showCacheProgress=_showCacheProgress;
@property(nonatomic) float sliderHeight; // @synthesize sliderHeight=_sliderHeight;
@property(retain, nonatomic) UIColor *cacheColor; // @synthesize cacheColor=_cacheColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) UIColor *frontgroundColor; // @synthesize frontgroundColor=_frontgroundColor;
- (void).cxx_destruct;
- (id)getFrontgroundImage;
- (id)getBackgroundImage;
- (void)resizeCacheProgress;
- (void)setCacheProgress:(double)arg1;
- (struct CGRect)minimumValueImageRectForBounds:(struct CGRect)arg1;
- (void)initView;
- (id)init;

@end

