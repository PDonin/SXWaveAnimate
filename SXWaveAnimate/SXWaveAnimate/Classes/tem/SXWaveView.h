//
//  SXWaveView.h
//  SXWaveAnimate
//
//  Created by dongshangxian on 15/7/23.
//  Copyright (c) 2015年 Sankuai. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "UIViewAdditions.h"

@interface SXWaveView : UIView
@property (weak, nonatomic) IBOutlet UIView *leftView;
@property (weak, nonatomic) IBOutlet UIImageView *rotateImg;
@property (weak, nonatomic) IBOutlet UILabel *avgScoreLbl;
@property (weak, nonatomic) IBOutlet UILabel *discriptionLbl;
@property(nonatomic,assign)int precent;

@property(nonatomic,strong)UIImageView *bigImg;

@property(nonatomic,assign)CGFloat alpha;
@property(nonatomic,strong)UIColor *textColor;
@property(nonatomic,strong)UIColor *bgColor;
@property(nonatomic,assign)int type;
@property(nonatomic,assign,getter=isEndless)BOOL endless;
@property(nonatomic,copy)NSString *descriptionTxt;


- (instancetype)initWithPrecent:(int)precent;
- (void)addAnimateWithType:(int)type;
- (void)setPrecent:(int)precent textColor:(UIColor *)tcolor type:(int)type alpha:(CGFloat)alpha;
- (void)setPrecent:(int)precent description:(NSString *)description textColor:(UIColor *)tcolor bgColor:(UIColor *)bColor type:(int)type alpha:(CGFloat)alpha endless:(BOOL)endless;

+ (instancetype)view;

@end