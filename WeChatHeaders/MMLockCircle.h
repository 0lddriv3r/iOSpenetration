//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface MMLockCircle : UIView
{
    BOOL _selected;
    BOOL _skiped;
    BOOL _errored;
}

@property(nonatomic) BOOL errored; // @synthesize errored=_errored;
@property(nonatomic) BOOL skiped; // @synthesize skiped=_skiped;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void)hightlightErrorCell;
- (void)resetCell;
- (void)highlightCell;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithRadius:(float)arg1;

@end
