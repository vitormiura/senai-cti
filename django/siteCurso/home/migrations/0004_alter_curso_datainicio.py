# Generated by Django 3.2.6 on 2021-08-11 13:05

import datetime
from django.db import migrations, models
from django.utils.timezone import utc


class Migration(migrations.Migration):

    dependencies = [
        ('home', '0003_auto_20210811_0949'),
    ]

    operations = [
        migrations.AlterField(
            model_name='curso',
            name='datainicio',
            field=models.DateTimeField(default=datetime.datetime(2021, 8, 11, 13, 5, 20, 94566, tzinfo=utc)),
        ),
    ]
