# MKDateFormatterFactory


## Why do we need a DateFormatterFactory factory to get DateFormatter objects?

An explanation from an apple refrence to [Guide and Sample Code](https://developer.apple.com/library/content/documentation/Cocoa/Conceptual/DataFormatting/Articles/dfDateFormatting10_4.html)

> Creating a date formatter is not a cheap operation. If you are likely to use a formatter frequently, it is typically more efficient to cache a single instance than to create and dispose of multiple instances. One approach is to use a static variable.
> 


## Support function

1. MKDateFormatterFactory can create instance of DateFormatter
2. Mkdateformatterfactory can cache Dateformatter instances for multiple use
3. Provides an easy way to format time


## Usage

Cocoapod is not supported now，so just only copy source file (`MKDateFormatterFactory.h`,`MKDateFormatterFactory.m`) to your project.

for example:

	// Get current time then formatter by "yyyy-MM-dd HH:mm:ss"
	NSDateFormatter *formatter = [[MKDateFormatterFactory sharedFactory] dateFormatterWithFormat:@"yyyy-MM-dd HH:mm:ss" andLocale:[[NSLocale alloc] initWithLocaleIdentifier:@"first-local-identifier"]];
	NSString *currentDateStr = [formatter stringFromDate:[NSDate date]];


----


## 为什么需要一个DateFormatterFactory工厂类来获取DateFormatter对象

引用自Apple的[Guide and Sample Code](https://developer.apple.com/library/content/documentation/Cocoa/Conceptual/DataFormatting/Articles/dfDateFormatting10_4.html)

> Creating a date formatter is not a cheap operation. If you are likely to use a formatter frequently, it is typically more efficient to cache a single instance than to create and dispose of multiple instances. One approach is to use a static variable.
> 


## 支持的功能

1. 工厂单利类创建DateFormatter对象 
2. 缓存DateFormatter对象，减少创建对象开销，方便对象的复用 
3. 提供了简便的方法自定义或系统格式化时间，。

## 如何使用

只需要获取源文件`MKDateFormatterFactory.h`和`MKDateFormatterFactory.m`到项目中，并通过`#import`引入即可。

### 方法使用

	// 获取当前时间并以 yyyy-MM-dd HH:mm:ss 进行格式化
	NSDateFormatter *formatter = [[MKDateFormatterFactory sharedFactory] dateFormatterWithFormat:@"yyyy-MM-dd HH:mm:ss" andLocale:[[NSLocale alloc] initWithLocaleIdentifier:@"first-local-identifier"]];
    NSString *currentDateStr = [formatter stringFromDate:[NSDate date]];
