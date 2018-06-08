//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@interface MMBadgeView : UIImageView
{
    struct CGPoint pOriginPoint;
    float fAddedWidth;
    float fOriginWidth;
    BOOL isIpadClassic;
    float m_range;
}

@property(nonatomic) float fAddedWidth; // @synthesize fAddedWidth;
@property(nonatomic) struct CGPoint pOriginPoint; // @synthesize pOriginPoint;
- (id)scaleToSize:(id)arg1 size:(struct CGSize)arg2;
- (BOOL)isNeedMoveY:(id)arg1;
- (BOOL)isPureNumandCharacters:(id)arg1;
- (void)SetImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setString:(id)arg1;
- (void)setValue:(unsigned int)arg1;
- (id)labelView;
- (void)setUpView;
- (id)initIpadClassicWithFrame:(struct CGRect)arg1 andRange:(float)arg2;
- (id)initIpadClassicWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 ipadClassic:(BOOL)arg2 range:(float)arg3;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setStringImage:(BOOL)arg1;
- (void)CustomTag:(id)arg1 imageName:(id)arg2;

@end

