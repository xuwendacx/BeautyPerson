//
//  BaseView.m
//  MMPerson
//
//  Created by WDTechnology on 15/11/5.
//  Copyright © 2015年 WDTechnology. All rights reserved.
//

#import "BaseView.h"

@implementation BaseView

+(instancetype)buildViewFromNib{
    
    NSString *nibName=[NSString stringWithFormat:@"%@.xib",NSStringFromClass(self.class)];
    
    return [[[NSBundle mainBundle] loadNibNamed:nibName owner:nil options:nil] lastObject];
    
}

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

@end
