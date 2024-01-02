from setuptools import find_packages
from setuptools import setup

setup(
    name='eddog_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('eddog_msgs', 'eddog_msgs.*')),
)
