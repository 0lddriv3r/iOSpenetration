//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMCPLabel.h"

@interface MMAdaptiveLabel : MMCPLabel
{
    int m_adaptiveType;
}

+ (struct CGSize)getIdealSize:(id)arg1 initSize:(struct CGSize)arg2 forAdaptiveType:(int)arg3;
- (void)setLineBreakMode:(int)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setAdaptiveType:(int)arg1;
- (void)adjustSize;
- (void)internalAdjustFrame:(struct CGRect *)arg1;

@end
